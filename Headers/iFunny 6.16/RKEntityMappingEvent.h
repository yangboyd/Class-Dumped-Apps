//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, RKEntityMapping;

@interface RKEntityMappingEvent : NSObject
{
    id _rootKey;
    NSString *_keyPath;
    RKEntityMapping *_entityMapping;
}

+ (id)eventWithRootKey:(id)arg1 keyPath:(id)arg2 entityMapping:(id)arg3;
+ (id)entityMappingEventsWithMappingInfo:(id)arg1 rootKey:(id)arg2 keyPath:(id)arg3;
+ (id)entityMappingEventsForMappingInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) RKEntityMapping *entityMapping; // @synthesize entityMapping=_entityMapping;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(copy, nonatomic) id rootKey; // @synthesize rootKey=_rootKey;
- (id)description;

@end

