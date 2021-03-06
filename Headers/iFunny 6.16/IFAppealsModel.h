//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFModelProtocol-Protocol.h>

@class IFAppealsViewController, IFBanService, NSString;
@protocol IFControllerProtocol;

@interface IFAppealsModel : NSObject <IFModelProtocol>
{
    IFAppealsViewController<IFControllerProtocol> *_controller;
    IFBanService *_banService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IFBanService *banService; // @synthesize banService=_banService;
@property(nonatomic) __weak IFAppealsViewController<IFControllerProtocol> *controller; // @synthesize controller=_controller;
- (void)cancelAppeal:(id)arg1;
- (void)loadAppeals;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

