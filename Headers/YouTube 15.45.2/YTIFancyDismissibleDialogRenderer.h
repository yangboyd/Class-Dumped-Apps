//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTICommand, YTIFormattedString;

@interface YTIFancyDismissibleDialogRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *confirmLabel; // @dynamic confirmLabel;
@property(retain, nonatomic) YTICommand *confirmNavigationEndpoint; // @dynamic confirmNavigationEndpoint;
@property(retain, nonatomic) YTICommand *confirmServiceEndpoint; // @dynamic confirmServiceEndpoint;
@property(retain, nonatomic) YTIFormattedString *dialogMessage; // @dynamic dialogMessage;
@property(nonatomic) _Bool hasConfirmLabel; // @dynamic hasConfirmLabel;
@property(nonatomic) _Bool hasConfirmNavigationEndpoint; // @dynamic hasConfirmNavigationEndpoint;
@property(nonatomic) _Bool hasConfirmServiceEndpoint; // @dynamic hasConfirmServiceEndpoint;
@property(nonatomic) _Bool hasDialogMessage; // @dynamic hasDialogMessage;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) NSMutableArray *onConfirmArray; // @dynamic onConfirmArray;
@property(readonly, nonatomic) unsigned long long onConfirmArray_Count; // @dynamic onConfirmArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

