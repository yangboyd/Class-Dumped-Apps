//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GTLRObject.h>

@class GTLROAuthIntegrations_AccountInfo, NSArray;

@interface GTLROAuthIntegrations_SelectionInfo : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) GTLROAuthIntegrations_AccountInfo *accountInfo; // @dynamic accountInfo;
@property(retain, nonatomic) NSArray *createAccountOptionalClaims; // @dynamic createAccountOptionalClaims;
@property(retain, nonatomic) NSArray *createAccountRequiredClaims; // @dynamic createAccountRequiredClaims;

@end

