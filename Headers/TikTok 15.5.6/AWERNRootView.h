//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTRootView.h"

@class AWERNBridge, NSString, NSURL;

@interface AWERNRootView : RCTRootView
{
    _Bool _needShareBridge;
    _Bool _preCreateBridge;
    AWERNBridge *_aweRNBridge;
    NSString *_module;
    NSURL *_initialBaseFileURL;
    NSURL *_initialPatchFileURL;
    NSString *_patchFileURL;
    id _jsloadNotificationToken;
}

@property(retain, nonatomic) id jsloadNotificationToken; // @synthesize jsloadNotificationToken=_jsloadNotificationToken;
@property(nonatomic) _Bool preCreateBridge; // @synthesize preCreateBridge=_preCreateBridge;
@property(nonatomic) _Bool needShareBridge; // @synthesize needShareBridge=_needShareBridge;
@property(copy, nonatomic) NSString *patchFileURL; // @synthesize patchFileURL=_patchFileURL;
@property(copy, nonatomic) NSURL *initialPatchFileURL; // @synthesize initialPatchFileURL=_initialPatchFileURL;
@property(copy, nonatomic) NSURL *initialBaseFileURL; // @synthesize initialBaseFileURL=_initialBaseFileURL;
@property(copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(retain, nonatomic) AWERNBridge *aweRNBridge; // @synthesize aweRNBridge=_aweRNBridge;
- (void).cxx_destruct;
- (id)initWithModuleName:(id)arg1 baseFileURL:(id)arg2 patchFileURL:(id)arg3 initialProperties:(id)arg4;
- (void)dealloc;

@end

