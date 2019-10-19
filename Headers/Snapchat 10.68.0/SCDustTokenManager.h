//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, SCQueuePerformer;

@interface SCDustTokenManager : NSObject
{
    SCQueuePerformer *_performer;
    NSData *_currentToken;
}

+ (id)shared;
+ (id)path;
@property(copy) NSData *currentToken; // @synthesize currentToken=_currentToken;
- (void).cxx_destruct;
- (_Bool)_clearKeychain;
- (_Bool)_writeCurrentTokenToKeychain;
- (id)_readFromKeychain;
- (_Bool)_clearArchive;
- (_Bool)_writeCurrentTokenToArchive;
- (id)_readFromArchive;
- (void)clear;
- (void)_loadDustToken;
- (void)_persistCurrentToken;
- (id)dustToken;
- (void)_setIfUntouched:(id)arg1 newValue:(id)arg2;
- (void)receivedServerResponse:(id)arg1;
- (id)init;

@end

