//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Funny/IFControllerProtocol-Protocol.h>

@class IFChannelTutorialRouter, NSString, UIView;
@protocol IFModelProtocol, IFViewProtocol;

@interface IFChannelTutorialViewController : UIViewController <IFControllerProtocol>
{
    id <IFModelProtocol> model;
    IFChannelTutorialRouter *_router;
}

+ (id)dataView;
- (void).cxx_destruct;
@property(retain, nonatomic) IFChannelTutorialRouter *router; // @synthesize router=_router;
@property(retain, nonatomic) id <IFModelProtocol> model; // @synthesize model;
- (void)createChannelButtonDidTapped:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView<IFViewProtocol> *view;

@end

