//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface NLWeaveHushResponse : NSObject
{
    unsigned char _hushResult;
    NSArray *_conditions;
}

+ (id)createUsing:(unsigned char)arg1 length:(int)arg2 conditions:(const char *)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *conditions; // @synthesize conditions=_conditions;
@property(nonatomic) unsigned char hushResult; // @synthesize hushResult=_hushResult;
- (id)initWith:(unsigned char)arg1 length:(int)arg2 conditions:(const char *)arg3;

@end

