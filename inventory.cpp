#include <iostream>
#include <vector>
#include "inventory.hpp"

Inventory::Inventory() {
	std::vector<std::unique_ptr<Item>> inventory;
}

void Inventory::addItem(Item& item, int quantity) {
	for (int i = 0; i < quantity; i++) {
		inventory.emplace_back(std::make_unique<item>);
	}
}

void Inventory::removeItem(Item& item, int quantity){

}

void Inventory::displayItems() {

}

Item* Inventory::getItem() {
	//return item;
}

/*
	Inventory inventory;

	Player player;

	player.openInventory(inventory);


*/