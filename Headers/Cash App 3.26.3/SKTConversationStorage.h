//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol SKTStorage;

@interface SKTConversationStorage : NSObject
{
    id <SKTStorage> _storage;
    NSMutableDictionary *_cache;
}

@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) id <SKTStorage> storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (void)clear;
- (void)removeConversationById:(id)arg1;
- (id)findConversationById:(id)arg1;
- (void)storeConversation:(id)arg1;
- (id)initWithStorage:(id)arg1;

@end

