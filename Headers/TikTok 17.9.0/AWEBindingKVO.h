//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AWEBindingKVO : NSObject
{
    id _object;
    NSString *_keyPath;
    CDUnknownBlockType _handler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(nonatomic) __weak id object; // @synthesize object=_object;
- (void)dealloc;
- (void)removeFromKVOManager:(id)arg1;
- (void)removeFromKVOManager;
- (void)addToKVOManager;
- (id)currentObjectValue;
- (void)registHandler:(CDUnknownBlockType)arg1;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2;

@end

