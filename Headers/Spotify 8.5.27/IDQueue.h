//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IDQueue : NSObject
{
    NSMutableArray *_array;
    NSObject *_monitor;
}

@property(retain) NSObject *monitor; // @synthesize monitor=_monitor;
@property(retain) NSMutableArray *array; // @synthesize array=_array;
- (void).cxx_destruct;
- (void)remove:(id)arg1;
- (unsigned long long)count;
- (void)enqueue:(id)arg1;
- (id)dequeue;
- (id)peek;
- (id)allObjects;
- (id)init;

@end

