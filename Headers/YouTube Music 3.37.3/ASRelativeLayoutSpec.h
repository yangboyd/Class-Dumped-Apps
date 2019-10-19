//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASLayoutSpec.h"

@interface ASRelativeLayoutSpec : ASLayoutSpec
{
    unsigned long long _horizontalPosition;
    unsigned long long _verticalPosition;
    unsigned long long _sizingOption;
}

+ (id)relativePositionLayoutSpecWithHorizontalPosition:(unsigned long long)arg1 verticalPosition:(unsigned long long)arg2 sizingOption:(unsigned long long)arg3 child:(id)arg4;
@property(nonatomic) unsigned long long sizingOption; // @synthesize sizingOption=_sizingOption;
@property(nonatomic) unsigned long long verticalPosition; // @synthesize verticalPosition=_verticalPosition;
@property(nonatomic) unsigned long long horizontalPosition; // @synthesize horizontalPosition=_horizontalPosition;
- (double)proportionOfAxisForAxisPosition:(unsigned long long)arg1;
- (id)calculateLayoutThatFits:(CDStruct_42a63532)arg1;
- (id)initWithHorizontalPosition:(unsigned long long)arg1 verticalPosition:(unsigned long long)arg2 sizingOption:(unsigned long long)arg3 child:(id)arg4;

@end

