//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseQVCItem.h"

@class NSString;

@interface BasePaymentMethod : BaseQVCItem
{
    NSString *serviceId;
    NSString *methodType;
    NSString *methodTypeDescription;
    NSString *paymentId;
    NSString *_termsURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *termsURL; // @synthesize termsURL=_termsURL;
@property(retain, nonatomic) NSString *paymentId; // @synthesize paymentId;
@property(retain, nonatomic) NSString *methodTypeDescription; // @synthesize methodTypeDescription;
@property(retain, nonatomic) NSString *methodType; // @synthesize methodType;
@property(retain, nonatomic) NSString *serviceId; // @synthesize serviceId;
- (_Bool)isEqualTo:(id)arg1;
- (id)displayValue;

@end

