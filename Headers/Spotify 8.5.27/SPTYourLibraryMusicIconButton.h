//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEAccessoryIconButton.h"

#import "SPTYourLibraryMusicActionableButton-Protocol.h"

@class NSString;

@interface SPTYourLibraryMusicIconButton : GLUEAccessoryIconButton <SPTYourLibraryMusicActionableButton>
{
    _Bool _disabledOffline;
    CDUnknownBlockType _actionBlock;
}

@property(nonatomic, getter=isDisabledOffline) _Bool disabledOffline; // @synthesize disabledOffline=_disabledOffline;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void).cxx_destruct;
- (void)callActionBlock;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

