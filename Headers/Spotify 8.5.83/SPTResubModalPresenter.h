//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTModalPresentationController;

@interface SPTResubModalPresenter : NSObject
{
    id <SPTModalPresentationController> _presentationController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTModalPresentationController> presentationController; // @synthesize presentationController=_presentationController;
- (void)dismissViewController:(id)arg1;
- (void)presentViewController:(id)arg1;
- (id)initWithPresentationController:(id)arg1;

@end

