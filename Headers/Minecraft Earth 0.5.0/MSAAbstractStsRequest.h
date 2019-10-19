//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSAClockSkewManager, MSAConfigManager, NSURL;

@interface MSAAbstractStsRequest : NSObject
{
    NSURL *_destination;
    MSAClockSkewManager *_clockSkewManager;
    MSAConfigManager *_configManager;
}

@property(retain) MSAConfigManager *configManager; // @synthesize configManager=_configManager;
@property(retain) MSAClockSkewManager *clockSkewManager; // @synthesize clockSkewManager=_clockSkewManager;
@property(retain, nonatomic) NSURL *destination; // @synthesize destination=_destination;
- (void).cxx_destruct;
- (_Bool)send:(out id *)arg1;

@end

