//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface SCYKeyPair : NSObject
{
    NSData *_publicKey;
    NSData *_privateKey;
}

+ (id)keyPairWithPublicKey:(id)arg1 privateKey:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *privateKey; // @synthesize privateKey=_privateKey;
@property(readonly, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
- (id)description;
- (id)initWithPublicKey:(id)arg1 privateKey:(id)arg2;

@end

