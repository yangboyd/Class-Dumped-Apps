//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class ComAmazonModelIdentityService_Token;

@interface ComAmazonModelIdentityService_InstallationIdRequest : CoralModel <NSCoding, NSCopying>
{
    ComAmazonModelIdentityService_Token *_token;
}

+ (id)type;
@property(retain, nonatomic) ComAmazonModelIdentityService_Token *token; // @synthesize token=_token;
- (void).cxx_destruct;

@end

