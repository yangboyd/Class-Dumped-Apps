//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString;

@interface PhotosMCGuidedCreationTemplate_Step : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSelectionMaximum; // @dynamic hasSelectionMaximum;
@property(nonatomic) _Bool hasSelectionMinimum; // @dynamic hasSelectionMinimum;
@property(nonatomic) _Bool hasStepId; // @dynamic hasStepId;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) unsigned int selectionMaximum; // @dynamic selectionMaximum;
@property(nonatomic) unsigned int selectionMinimum; // @dynamic selectionMinimum;
@property(copy, nonatomic) NSString *stepId; // @dynamic stepId;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int type; // @dynamic type;

@end

