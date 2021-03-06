//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CDVMoney, NSString;

@interface CDRPItemGroupPrice : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) CDVMoney *authAmount; // @dynamic authAmount;
@property(retain, nonatomic) CDVMoney *authAmountPreTax; // @dynamic authAmountPreTax;
@property(retain, nonatomic) CDVMoney *authAmountTax; // @dynamic authAmountTax;
@property(copy, nonatomic) NSString *groupIdentifier; // @dynamic groupIdentifier;
@property(nonatomic) _Bool hasAuthAmount; // @dynamic hasAuthAmount;
@property(nonatomic) _Bool hasAuthAmountPreTax; // @dynamic hasAuthAmountPreTax;
@property(nonatomic) _Bool hasAuthAmountTax; // @dynamic hasAuthAmountTax;
@property(nonatomic) _Bool hasGroupIdentifier; // @dynamic hasGroupIdentifier;
@property(nonatomic) _Bool hasSubtotal; // @dynamic hasSubtotal;
@property(nonatomic) _Bool hasSubtotalPreTax; // @dynamic hasSubtotalPreTax;
@property(nonatomic) _Bool hasSubtotalTax; // @dynamic hasSubtotalTax;
@property(nonatomic) _Bool hasTotalDisposalTax; // @dynamic hasTotalDisposalTax;
@property(nonatomic) _Bool hasTotalPrice; // @dynamic hasTotalPrice;
@property(nonatomic) _Bool hasTotalRedemptionFee; // @dynamic hasTotalRedemptionFee;
@property(nonatomic) _Bool hasTotalSalesTax; // @dynamic hasTotalSalesTax;
@property(retain, nonatomic) CDVMoney *subtotal; // @dynamic subtotal;
@property(retain, nonatomic) CDVMoney *subtotalPreTax; // @dynamic subtotalPreTax;
@property(retain, nonatomic) CDVMoney *subtotalTax; // @dynamic subtotalTax;
@property(retain, nonatomic) CDVMoney *totalDisposalTax; // @dynamic totalDisposalTax;
@property(retain, nonatomic) CDVMoney *totalPrice; // @dynamic totalPrice;
@property(retain, nonatomic) CDVMoney *totalRedemptionFee; // @dynamic totalRedemptionFee;
@property(retain, nonatomic) CDVMoney *totalSalesTax; // @dynamic totalSalesTax;

@end

