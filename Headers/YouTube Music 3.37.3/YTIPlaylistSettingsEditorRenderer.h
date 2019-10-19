//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTICommand, YTIFormattedString;

@interface YTIPlaylistSettingsEditorRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *deleteButtonText; // @dynamic deleteButtonText;
@property(retain, nonatomic) YTIFormattedString *deleteConfirmationText; // @dynamic deleteConfirmationText;
@property(retain, nonatomic) YTICommand *deleteEndpoint; // @dynamic deleteEndpoint;
@property(nonatomic) _Bool hasDeleteButtonText; // @dynamic hasDeleteButtonText;
@property(nonatomic) _Bool hasDeleteConfirmationText; // @dynamic hasDeleteConfirmationText;
@property(nonatomic) _Bool hasDeleteEndpoint; // @dynamic hasDeleteEndpoint;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUpdateSettingsEndpoint; // @dynamic hasUpdateSettingsEndpoint;
@property(retain, nonatomic) NSMutableArray *sectionsArray; // @dynamic sectionsArray;
@property(readonly, nonatomic) unsigned long long sectionsArray_Count; // @dynamic sectionsArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTICommand *updateSettingsEndpoint; // @dynamic updateSettingsEndpoint;

@end

