class Block {
	constructor(timestamp, transactions, previosHash = '') {
		this.previousHash = previousHash;
		this.timestamp = timestamp;
		this.transactions = transactions;
		this.hash = this.calculateHash();
		this.nonce = 0;
	}

	calculateHash() {
		return SHA256(this.previousHash + this.timestamp + JSON.stringify(this.transactions) + this.nonce).toString();
	}

	//Difficulty of two: means we want to find a hash that starts with two 0’s.
	//Array(difficulty + 1).join(“0”) will first create an array with 3 (2 + 1) empty slots. Next, we call the join function on the array and tell it to paste a ‘0’ between each empty slot giving us a string with two zeros ‘00’.
	//A while loop is used to check for two zeros, if it doesn't, the nonce is increased and hash is recalculated.
	mineBlock(difficulty) {
		while(this.hash.substring(0, difficulty) !== Array(difficulty + 1).join("0")) {
			this.nonce++;
			this.hash = this.calculateHash();
		}

		console.log("Block Mined: " + this.hash); 
	}
}

class Blockchain {
	constructor(genesisNode) {
		this.chain = [this.createGenesisBlock()];
		this.nodes = [+genesisNode]
		this.difficulty = 4;
		this.pendingTransactions = [];
		this.miningReward = 100;
	}

	//This block consists of the actual date, an empty array of transactions and a null reference to the previous hash parameter.
	createGenesisBlock() {
		return new Block(Date.parse("2018-03-19"), [], "0");
	}

	getLatestBlock() {
		return this.chain[this.chain.length - 1];
	}

	//This reward is considered to be a transaction and will be included in the pending transactions array for the next block. So, when the next block is mined, the miner will receive his reward.
	minePendingTransactions(miningRewardAddress) {
		let block = new Block(Date.now(), this.pendingTransactions, this.getLatestBlock().hash);
		block.mineBlock(this.difficulty);

		console.log('Block successfully mined!');
		this.chain.push(block);

		this.pendingTransactions = [new Transaction(null, miningRewardAddress, this.miningReward)];
	}

	createTransaction(transaction) {
		this.pendingTransactions.push(transaction);
	}

	// There are two scenarios in which our blockchain ends up being invalid:
	// The calculated hash of a block is not equal to the hash included in the block.
	// The previousHash property of the current block doesn’t point to the hash of the previous block.
	isChainValid() {
		for(let i = 1; i < this.chain.length; i++) {
			const currentBlock = this.chain[i];
			const previousBlock = this.chain[i-1];

			if(currentBlock.hash !== currentBlock.calculateHash()) {
				return false;
			}

			if(currentBlock.previousHash !== previousBlock.hash) {
				return false;
			}
		}
		return true;
	}

	getBalanceOfAddress(address) {
		let balance = 0;
		for(const block of this.chain) {
			for(const trans of block.transactions) {
				if(trans.fromAddress === address) {
					balance -= trans.amount;
				}

				if(trans.toAddress === address) {
					balance += trans.amount;
				}
			}
		}
		return balance;
	}
}

class Transaction {
	constructor(fromAddress, toAddress, amount) {
		this.fromAddress = fromAddress;
		this.toAddress = toAddress;
		this.amount = amount;
	}
}