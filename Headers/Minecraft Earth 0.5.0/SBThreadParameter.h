//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface SBThreadParameter : NSObject
{
    _Bool isMainThread;
    NSArray *parameters;
    CDUnknownBlockType completion;
    NSString *deviceToken;
}

@property(copy, nonatomic) NSString *deviceToken; // @synthesize deviceToken;
@property(nonatomic) _Bool isMainThread; // @synthesize isMainThread;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion;
@property(copy, nonatomic) NSArray *parameters; // @synthesize parameters;
- (void).cxx_destruct;

@end

