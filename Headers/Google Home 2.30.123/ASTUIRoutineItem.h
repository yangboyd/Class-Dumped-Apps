//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASTAPIClientInput, NSString;

@interface ASTUIRoutineItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ASTAPIClientInput *clientInput; // @dynamic clientInput;
@property(nonatomic) _Bool hasClientInput; // @dynamic hasClientInput;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

