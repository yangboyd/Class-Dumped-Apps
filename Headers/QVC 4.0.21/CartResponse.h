//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseQVCServiceResponse.h"

@class NSMutableArray, NSString;

@interface CartResponse : BaseQVCServiceResponse
{
    NSString *grandTotal;
    NSString *inStockOrderTotal;
    NSMutableArray *inStockItems;
    NSString *waitlistOrderTotal;
    NSMutableArray *waitlistItems;
    NSString *aoOrderTotal;
    NSMutableArray *aoItems;
    NSString *productState;
    NSMutableArray *savedItems;
    NSString *easyPayTodaysTotal;
    NSString *savedItemOrderId;
    NSString *instockDiscountTotal;
    NSString *waitlistDiscountTotal;
}

+ (id)newCartResponseFromResponseData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *savedItemOrderId; // @synthesize savedItemOrderId;
@property(retain, nonatomic) NSString *productState; // @synthesize productState;
@property(retain, nonatomic) NSMutableArray *savedItems; // @synthesize savedItems;
@property(retain, nonatomic) NSMutableArray *waitlistItems; // @synthesize waitlistItems;
@property(retain, nonatomic) NSString *waitlistDiscountTotal; // @synthesize waitlistDiscountTotal;
@property(retain, nonatomic) NSString *waitlistOrderTotal; // @synthesize waitlistOrderTotal;
@property(retain, nonatomic) NSMutableArray *inStockItems; // @synthesize inStockItems;
@property(retain, nonatomic) NSString *instockDiscountTotal; // @synthesize instockDiscountTotal;
@property(retain, nonatomic) NSString *easyPayTodaysTotal; // @synthesize easyPayTodaysTotal;
@property(retain, nonatomic) NSString *inStockOrderTotal; // @synthesize inStockOrderTotal;
@property(retain, nonatomic) NSString *grandTotal; // @synthesize grandTotal;
- (id)description;
- (id)initWithJsonItem:(id)arg1;

@end

