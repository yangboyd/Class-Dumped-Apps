//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APLevelDB;

@interface APLevelDBIterator : NSObject
{
    struct Iterator *_iter;
    APLevelDB *_levelDB;
}

+ (id)iteratorWithLevelDB:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) APLevelDB *levelDB; // @synthesize levelDB=_levelDB;
- (id)valueAsData;
- (id)valueAsString;
- (id)key;
- (id)nextKey;
- (void)seekToLast;
- (void)seekToFirst;
- (_Bool)seekToKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithLevelDB:(id)arg1;

@end

