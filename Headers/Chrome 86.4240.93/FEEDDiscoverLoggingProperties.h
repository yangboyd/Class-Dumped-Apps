//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

#import <ChromeInternal/DSCPropertyHandler-Protocol.h>

@class FEEDActionPayload, NSString;

@interface FEEDDiscoverLoggingProperties : GPBMessage <DSCPropertyHandler>
{
}

+ (id)descriptor;
+ (int)propertyNumber;
+ (id)dsc_parseFromData:(id)arg1 error:(id *)arg2;
- (id)viewForController:(id)arg1;
- (id)metadataForController:(id)arg1;
- (_Bool)dsc_performDefaultHandling;
- (_Bool)dsc_handlePropertiesWithController:(id)arg1 context:(id)arg2 viewController:(id)arg3 model:(id)arg4 error:(id *)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasSwappableKey; // @dynamic hasSwappableKey;
@property(nonatomic) _Bool hasViewActionPayload; // @dynamic hasViewActionPayload;
@property(nonatomic) _Bool hasViewActionsEnabled; // @dynamic hasViewActionsEnabled;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *swappableKey; // @dynamic swappableKey;
@property(retain, nonatomic) FEEDActionPayload *viewActionPayload; // @dynamic viewActionPayload;
@property(nonatomic) _Bool viewActionsEnabled; // @dynamic viewActionsEnabled;

@end

