//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBKVOController, NSString;

@interface NSObject (debounce)
+ (void)debounceForTarget:(id)arg1 action:(SEL)arg2 object:(id)arg3 delay:(double)arg4 inModes:(id)arg5;
+ (id)castObject:(id)arg1;
+ (id)decodableObjectFrom:(id)arg1 using:(Class)arg2;
- (void)debounceAction:(SEL)arg1 object:(id)arg2 delay:(double)arg3 inModes:(id)arg4;
- (void)debounceAction:(SEL)arg1 object:(id)arg2 delay:(double)arg3;
@property(retain, nonatomic) FBKVOController *KVOControllerNonRetaining;
@property(retain, nonatomic) FBKVOController *KVOController;
@property(retain, nonatomic) NSString *memoryAddress;
@end

