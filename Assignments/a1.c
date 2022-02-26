#include "a1.h"

/**
	Add your functions to this file.
	Make sure to review a1.h.
	Do NOT include a main() function in this file
	when you submit.
*/

Restaurant* initialize_restaurant(char* name){
    Restaurant* resto = (Restaurant *)malloc(sizeof(Restaurant *));
    resto->name = name;
    resto->menu = NULL; //TODO: implement load_menu
    resto->num_completed_orders = 0;
    resto->num_pending_orders = 0;
    Queue* pending = (Queue*)malloc(sizeof(Queue *));
    pending->head = NULL;
    pending->tail = NULL;
    resto->pending_orders = pending;
    return resto;
}
int count_lines(FILE* menufile){
    int line_count = 0;
    if(!menufile)
        return 0;
    char car = fgets;
    while 
    return 0;
}
Menu* load_menu(char* fname){
    //TODO I/O menu.txt
    FILE* fptr = fopen(fname, "r");
    count_lines(fptr);
    Menu* miam = (Menu*)malloc(sizeof(Menu*));
    miam->num_items = 0; //TODO:get length of text file
    char** local_ic = (char**)calloc(miam->num_items, sizeof(char)*ITEM_CODE_LENGTH);
    miam->item_codes = local_ic;
    char** local_in = (char**)calloc(miam->num_items, sizeof(char)*MAX_ITEM_NAME_LENGTH);
    miam->item_names = local_in;
    double* local_cost = (double*)malloc(miam->num_items*sizeof(double));
    miam->item_cost_per_unit = local_cost;
    return miam;
}

//////////////////////////// Given
void print_menu(Menu* menu){
	fprintf(stdout, "--- Menu ---\n");
	for (int i = 0; i < menu->num_items; i++){
		fprintf(stdout, "(%s) %s: %.2f\n", 
			menu->item_codes[i], 
			menu->item_names[i], 
			menu->item_cost_per_unit[i]	
		);
	}
}


void print_order(Order* order){
	for (int i = 0; i < order->num_items; i++){
		fprintf(
			stdout, 
			"%d x (%s)\n", 
			order->item_quantities[i], 
			order->item_codes[i]
		);
	}
}


void print_receipt(Order* order, Menu* menu){
	for (int i = 0; i < order->num_items; i++){
		double item_cost = get_item_cost(order->item_codes[i], menu);
		fprintf(
			stdout, 
			"%d x (%s)\n @$%.2f ea \t %.2f\n", 
			order->item_quantities[i],
			order->item_codes[i], 
			item_cost,
			item_cost * order->item_quantities[i]
		);
	}
	double order_subtotal = get_order_subtotal(order, menu);
	double order_total = get_order_total(order, menu);
	
	fprintf(stdout, "Subtotal: \t %.2f\n", order_subtotal);
	fprintf(stdout, "               -------\n");
	fprintf(stdout, "Tax %d%%: \t$%.2f\n", TAX_RATE, order_total);
	fprintf(stdout, "              ========\n");
}
