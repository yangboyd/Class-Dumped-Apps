//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IBGMovedIndex : NSObject
{
    unsigned long long _oldIndex;
    unsigned long long _newIndex;
}

+ (id)movedIndexfromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
@property(nonatomic) unsigned long long newIndex; // @synthesize newIndex=_newIndex;
@property(nonatomic) unsigned long long oldIndex; // @synthesize oldIndex=_oldIndex;
- (id)description;

@end

