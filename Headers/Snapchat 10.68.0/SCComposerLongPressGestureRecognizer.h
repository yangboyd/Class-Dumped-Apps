//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILongPressGestureRecognizer.h>

#import "SCComposerGestureRecognizer-Protocol.h"

@class NSString;
@protocol SCComposerFunction;

@interface SCComposerLongPressGestureRecognizer : UILongPressGestureRecognizer <SCComposerGestureRecognizer>
{
    id <SCComposerFunction> _function;
    id <SCComposerFunction> _predicate;
}

- (void).cxx_destruct;
- (void)_handleGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)setPredicate:(id)arg1;
- (id)initWithFunction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

