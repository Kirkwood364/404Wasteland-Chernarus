#include "gunstoreDefines.sqf"

class gunshopd {

	idd = gunshop_DIALOG;
	movingEnable = true;
	enableSimulation = true;
	onLoad = "[0] execVM 'client\systems\gunStore\populateGunStore.sqf'";

	class controlsBackground {
		
		class MainBackground: RscPicture
		{
			idc = -1;
			text = "\ca\ui\data\ui_background_controlers_ca.paa";

			x = 0.1875 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.837499 * safezoneW;
			h = 0.661111 * safezoneH;
		};
		
		class ItemSelectedPicture: RscPicture
		{
			idc = gunshop_gun_pic;
			text = "";

			x = 0.502604 * safezoneW + safezoneX;
			y = 0.236111 * safezoneH + safezoneY;
			w = 0.0891668 * safezoneW;
			h = 0.0753702 * safezoneH;
		};

		class ItemSelectedInfo: RscStructuredText
		{
			idc = gunshop_gun_Info;
			text = "";

			x = 0.440104 * safezoneW + safezoneX;
			y = 0.50463 * safezoneH + safezoneY;
			w = 0.214166 * safezoneW;
			h = 0.192963 * safezoneH;
		};

		class ItemSelectedPrice: RscStructuredText
		{
			idc = gunshop_gun_TEXT;
			text = "";

			x = 0.502604 * safezoneW + safezoneX;
			y = 0.317594 * safezoneH + safezoneY;
			w = 0.0891667 * safezoneW;
			h = 0.068889 * safezoneH;
		};

		class DialogTitleText: RscText
		{
			idc = -1;
			text = "Gun Store Menu";

			x = 0.203125 * safezoneW + safezoneX;
			y = 0.175 * safezoneH + safezoneY;
			w = 0.0844792 * safezoneW;
			h = 0.0448148 * safezoneH;
		};

		class PlayerMoneyText: RscText
		{
			idc = gunshop_money;
			text = "Cash:";

			x = 0.6875 * safezoneW + safezoneX;
			y = 0.175 * safezoneH + safezoneY;
			w = 0.0844792 * safezoneW;
			h = 0.0448148 * safezoneH;
		};

		class CartTotalText: RscText
		{
			idc = gunshop_total;
			text = "Total: $0";

			x = 0.6875 * safezoneW + safezoneX;
			y = 0.65 * safezoneH + safezoneY;
			w = 0.0844792 * safezoneW;
			h = 0.0448148 * safezoneH;
		};
	};
	
	class controls {
		
		class SelectionList: RscListbox
		{
			idc = gunshop_gun_list;
			onLBSelChanged = "[] execvm 'client\systems\gunStore\weaponInfo.sqf'";

			x = 0.3125 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0916666 * safezoneW;
			h = 0.422222 * safezoneH;
		};

		class CartList: RscListbox
		{
			idc = gunshop_cart;
			onLBSelChanged = "[] execvm 'client\systems\gunStore\weaponInfo.sqf'";

			x = 0.690104 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0916666 * safezoneW;
			h = 0.422222 * safezoneH;
		};

		class AddToCart: RscButton
		{
			idc = -1;
			onButtonClick = "[] execVM 'client\systems\gunStore\addToCart.sqf'";
			text = "Add";

			x = 0.515625 * safezoneW + safezoneX;
			y = 0.375 * safezoneH + safezoneY;
			w = 0.065 * safezoneW;
			h = 0.040 * safezoneH;

		};

		class RemoveFromCart: RscButton
		{
			idc = -1;
			onButtonClick = "[] execVM 'client\systems\gunStore\removeFromCart.sqf'";
			text = "Remove";

			x = 0.515625 * safezoneW + safezoneX;
			y = 0.425 * safezoneH + safezoneY;
			w = 0.065 * safezoneW;
			h = 0.040 * safezoneH;

		};

		class BuyToCrate: RscButton
		{
			idc = -1;
			onButtonClick = "[0] execVM 'client\systems\gunStore\buyGuns.sqf'";
			text = "Buy to Crate";

			x = 0.609375 * safezoneW + safezoneX;
			y = 0.750 * safezoneH + safezoneY;
			w = 0.088 * safezoneW;
			h = 0.040 * safezoneH;
			color[] = {0.1,0.95,0.1,1};

		};

		class BuyToPlayer: RscButton
		{
			idc = -1;
			onButtonClick = "[1] execVM 'client\systems\gunStore\buyGuns.sqf'";
			text = "Buy to Player";

			x = 0.703125 * safezoneW + safezoneX;
			y = 0.750 * safezoneH + safezoneY;
			w = 0.088 * safezoneW;
			h = 0.040 * safezoneH;
			color[] = {0.1,0.95,0.1,1};

		};

		class BuySellEquipment: RscButton
		{
			idc = -1;
			onButtonClick = "[] execVM 'client\systems\gunStore\sellWeapon.sqf'";
			text = "Sell Current Weapon";

			x = 0.40625 * safezoneW + safezoneX;
			y = 0.750 * safezoneH + safezoneY;
			w = 0.096 * safezoneW;
			h = 0.040 * safezoneH;

		};

		class CancelButton: RscButton
		{
			idc = -1;
			onButtonClick = "closeDialog 0;";
			text = "Cancel";

			x = 0.203125 * safezoneW + safezoneX;
			y = 0.750 * safezoneH + safezoneY;
			w = 0.072 * safezoneW;
			h = 0.040 * safezoneH;
			color[] = {0.95,0.1,0.1,1};

		};

		class StoreButton0: RscButton
		{
			idc = -1;
			onButtonClick = "[0] execVM 'client\systems\gunStore\populateGunStore.sqf'";
			text = "Weapons";

			x = 0.203125 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.088 * safezoneW;
			h = 0.040 * safezoneH;
	
		};

		class StoreButton1: RscButton
		{
			idc = -1;
			onButtonClick = "[1] execVM 'client\systems\gunStore\populateGunStore.sqf'";
			text = "Ammunition";

			x = 0.203125 * safezoneW + safezoneX;
			y = 0.275 * safezoneH + safezoneY;
			w = 0.088 * safezoneW;
			h = 0.040 * safezoneH;

		};

		class StoreButton2: RscButton
		{
			idc = -1;
			onButtonClick = "[2] execVM 'client\systems\gunStore\populateGunStore.sqf'";
			text = "Equipment";

			x = 0.203125 * safezoneW + safezoneX;
			y = 0.325 * safezoneH + safezoneY;
			w = 0.088 * safezoneW;
			h = 0.040 * safezoneH;

		};
	};
};