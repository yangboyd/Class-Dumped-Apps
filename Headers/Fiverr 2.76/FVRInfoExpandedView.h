//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FVROrderOriginalInfoItem, FVROrderShippingItem, NSArray, NSMutableArray, NSString, UILabel, UITableView;

@interface FVRInfoExpandedView : UIView
{
    UILabel *_itemTitleLabel;
    UILabel *_priceTitleLabel;
    UILabel *_amountTitleLabel;
    UITableView *_tableView;
    UILabel *_expectedDateLabel;
    UILabel *_totalPriceLabel;
    UILabel *_priceLabel;
    UILabel *_tableHeaderLabel;
    UIView *_seperatorView;
    NSMutableArray *_tableItems;
    _Bool _isSeller;
    _Bool _shouldShowDeliveryString;
    _Bool _isLate;
    FVROrderOriginalInfoItem *_originalItem;
    FVROrderShippingItem *_shippingItem;
    NSString *_daysToDelivery;
    NSString *_totalAmount;
    NSArray *_extras;
    NSArray *_extraFees;
    NSArray *_studioServices;
}

+ (double)expectedViewHeightByOriginalItem:(id)arg1 andExtras:(id)arg2 shippingItem:(id)arg3 extraFees:(id)arg4 studioServices:(id)arg5 isSeller:(_Bool)arg6;
+ (id)studioUIComponentsWithStudioItem:(id)arg1 showPrice:(_Bool)arg2;
@property(nonatomic) _Bool isLate; // @synthesize isLate=_isLate;
@property(nonatomic) _Bool shouldShowDeliveryString; // @synthesize shouldShowDeliveryString=_shouldShowDeliveryString;
@property(retain, nonatomic) NSArray *studioServices; // @synthesize studioServices=_studioServices;
@property(retain, nonatomic) NSArray *extraFees; // @synthesize extraFees=_extraFees;
@property(retain, nonatomic) NSArray *extras; // @synthesize extras=_extras;
@property(retain, nonatomic) NSString *totalAmount; // @synthesize totalAmount=_totalAmount;
@property(retain, nonatomic) NSString *daysToDelivery; // @synthesize daysToDelivery=_daysToDelivery;
@property(nonatomic) _Bool isSeller; // @synthesize isSeller=_isSeller;
@property(retain, nonatomic) FVROrderShippingItem *shippingItem; // @synthesize shippingItem=_shippingItem;
@property(retain, nonatomic) FVROrderOriginalInfoItem *originalItem; // @synthesize originalItem=_originalItem;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)prepareTableItems;
- (void)setupView;
- (id)studioCellId;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

