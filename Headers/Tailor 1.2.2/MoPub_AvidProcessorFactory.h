//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MoPub_AvidNodeProcessor;

@interface MoPub_AvidProcessorFactory : NSObject
{
    id <MoPub_AvidNodeProcessor> _screenProcessor;
    id <MoPub_AvidNodeProcessor> _windowProcessor;
    id <MoPub_AvidNodeProcessor> _viewProcessor;
}

- (void).cxx_destruct;
- (id)rootProcessor;
- (id)init;

@end

