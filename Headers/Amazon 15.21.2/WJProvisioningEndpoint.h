//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WJEndpoint.h"

@class WJBLEEndpoint;

@interface WJProvisioningEndpoint : WJEndpoint
{
    WJBLEEndpoint *_BLEEndpoint;
}

@property(retain, nonatomic) WJBLEEndpoint *BLEEndpoint; // @synthesize BLEEndpoint=_BLEEndpoint;
- (void).cxx_destruct;
- (id)services;
- (_Bool)isConnected;
- (id)deviceDescriminator;
- (id)identifier;
- (id)localName;
- (id)name;

@end

