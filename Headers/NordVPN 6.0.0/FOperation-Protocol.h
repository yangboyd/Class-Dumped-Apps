//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FOperationSource, FPath, NSString;
@protocol FOperation;

@protocol FOperation <NSObject>
@property(readonly, nonatomic) FPath *path;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) FOperationSource *source;
- (id <FOperation>)operationForChild:(NSString *)arg1;
@end

