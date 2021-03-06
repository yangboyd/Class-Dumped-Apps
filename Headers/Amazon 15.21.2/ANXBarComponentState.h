//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ANXBarComponentState : NSObject
{
    _Bool _visible;
    _Bool _autoHideOnScroll;
    int _zIndex;
    double _requestHeight;
    double _currentHeight;
    double _autoHideOffset;
}

@property(nonatomic) double autoHideOffset; // @synthesize autoHideOffset=_autoHideOffset;
@property(nonatomic) int zIndex; // @synthesize zIndex=_zIndex;
@property(nonatomic) double currentHeight; // @synthesize currentHeight=_currentHeight;
@property(readonly, nonatomic) double requestHeight; // @synthesize requestHeight=_requestHeight;
@property(readonly, nonatomic) _Bool autoHideOnScroll; // @synthesize autoHideOnScroll=_autoHideOnScroll;
@property(readonly, nonatomic) _Bool visible; // @synthesize visible=_visible;
- (id)description;
- (id)initWithVisibile:(_Bool)arg1 autoHideOnScroll:(_Bool)arg2 requestHeight:(double)arg3;

@end

