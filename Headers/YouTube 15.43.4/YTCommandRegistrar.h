//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, YTCommandRouter;

@interface YTCommandRegistrar : NSObject
{
    YTCommandRouter *_commandRouter;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)confirmDialogController;
- (void)registerCommandRoutes;
- (void)registerServiceEndpointRoutes;
- (void)registerCommands;
- (id)init;

@end

