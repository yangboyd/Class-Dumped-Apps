//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, OrchApiError;

@interface AlertServiceGetAlertResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *alertArray; // @dynamic alertArray;
@property(readonly, nonatomic) unsigned long long alertArray_Count; // @dynamic alertArray_Count;
@property(retain, nonatomic) OrchApiError *error; // @dynamic error;
@property(nonatomic) _Bool hasError; // @dynamic hasError;

@end

