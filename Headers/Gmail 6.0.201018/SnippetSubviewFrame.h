//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SnippetSubviewFrame : NSObject
{
    _Bool _canShrinkHorizontally;
    double _maxHeight;
    struct CGRect _frame;
}

+ (id)subviewFrameWithFrame:(struct CGRect)arg1 maxHeight:(double)arg2 canShrinkHorizontally:(_Bool)arg3;
@property(nonatomic) _Bool canShrinkHorizontally; // @synthesize canShrinkHorizontally=_canShrinkHorizontally;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;

@end

