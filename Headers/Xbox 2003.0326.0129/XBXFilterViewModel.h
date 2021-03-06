//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXModalViewModel.h"

@class NSArray, XBXFilterControl;

@interface XBXFilterViewModel : XBXModalViewModel
{
    NSArray *_options;
    XBXFilterControl *parentFilter;
}

@property(nonatomic) __weak XBXFilterControl *parentFilter; // @synthesize parentFilter;
@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)optionSelected:(id)arg1;
- (id)initWithFilterControl:(id)arg1;
- (id)initWithOptionsDictionary:(id)arg1;
- (void)onInitialize;
- (void)onDestroy;

@end

