//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IOSShared/SDModelObject.h>

@class WMPResponsePaymentSource;

@interface WMPResponsePaymentSources : SDModelObject
{
    WMPResponsePaymentSource *_walmartPayPaymentSource;
    WMPResponsePaymentSource *_posPaymentSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WMPResponsePaymentSource *posPaymentSource; // @synthesize posPaymentSource=_posPaymentSource;
@property(retain, nonatomic) WMPResponsePaymentSource *walmartPayPaymentSource; // @synthesize walmartPayPaymentSource=_walmartPayPaymentSource;
- (_Bool)validModel;
- (id)mappingDictionaryForData:(id)arg1;

@end

