//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GILVisualElement.h"

#import "NSSecureCoding-Protocol.h"

@class NSNumber;

@interface GILIndexedVisualElement : GILVisualElement <NSSecureCoding>
{
    NSNumber *_elementIndex;
}

+ (short)classID;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *elementIndex;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTag:(CDStruct_a9c8ee48)arg1 elementIndex:(id)arg2;
- (id)initWithTag:(CDStruct_a9c8ee48)arg1 index:(int)arg2;
- (id)initWithCoder:(id)arg1;

@end

