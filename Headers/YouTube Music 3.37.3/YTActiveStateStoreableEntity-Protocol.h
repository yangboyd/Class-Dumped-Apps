//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSCoder;

@protocol YTActiveStateStoreableEntity <NSObject>
@property(nonatomic) double storageDate;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
- (id)initWithCoder:(NSCoder *)arg1;
@end

