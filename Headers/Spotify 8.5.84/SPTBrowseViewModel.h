//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HUBViewModel;

@interface SPTBrowseViewModel : NSObject
{
    id <HUBViewModel> _hubViewModel;
    unsigned long long _contentType;
    unsigned long long _state;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) id <HUBViewModel> hubViewModel; // @synthesize hubViewModel=_hubViewModel;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithHubViewModel:(id)arg1 contentType:(unsigned long long)arg2 state:(unsigned long long)arg3;

@end

