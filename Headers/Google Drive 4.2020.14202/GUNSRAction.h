//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GUNSRImage, NSData, NSMutableArray, NSString;

@interface GUNSRAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(copy, nonatomic) NSString *accessibilityLabel_p; // @dynamic accessibilityLabel_p;
@property(nonatomic) _Bool hasAccessibilityLabel_p; // @dynamic hasAccessibilityLabel_p;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasRequestData; // @dynamic hasRequestData;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(retain, nonatomic) GUNSRImage *icon; // @dynamic icon;
@property(retain, nonatomic) NSMutableArray *metaTagArray; // @dynamic metaTagArray;
@property(readonly, nonatomic) unsigned long long metaTagArray_Count; // @dynamic metaTagArray_Count;
@property(copy, nonatomic) NSData *requestData; // @dynamic requestData;
@property(copy, nonatomic) NSString *text; // @dynamic text;

@end

