//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface MSAKeyGenerator : NSObject
{
    NSData *_sessionKey;
}

- (void).cxx_destruct;
- (id)deriveSP800108HmacSHA256KeyOfSize:(long long)arg1 secret:(id)arg2 label:(id)arg3 context:(id)arg4;
- (id)generateKeyForPurpose:(id)arg1 withNonce:(id)arg2;
- (id)initWithSessionKey:(id)arg1;
- (id)init;

@end

