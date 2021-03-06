//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@protocol IGGestureCoordinatingScrollViewTouchCancellationDelegate, UIGestureRecognizerDelegate;

@interface IGGestureCoordinatingScrollView : UIScrollView
{
    id <UIGestureRecognizerDelegate> _gestureDelegate;
    id <IGGestureCoordinatingScrollViewTouchCancellationDelegate> _touchCancellationDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGGestureCoordinatingScrollViewTouchCancellationDelegate> touchCancellationDelegate; // @synthesize touchCancellationDelegate=_touchCancellationDelegate;
@property(nonatomic) __weak id <UIGestureRecognizerDelegate> gestureDelegate; // @synthesize gestureDelegate=_gestureDelegate;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;

@end

