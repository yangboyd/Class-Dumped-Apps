//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImageProcessLensCommandListener-Protocol.h"
#import "SCUcoStateProviding-Protocol.h"

@class NSString, SCUcoStateListenerAnnouncer;

@interface SCSingleLensCommandUcoStateProvider : NSObject <SCUcoStateProviding, SCImageProcessLensCommandListener>
{
    SCUcoStateListenerAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (void)imageProcessLensCommand:(id)arg1 didRecognizeFaces:(unsigned long long)arg2;
- (void)imageProcessLensCommand:(id)arg1 didRecognizeExpression:(id)arg2;
- (void)imageProcessLensCommand:(id)arg1 didFinishProcessingFrameWithLens:(id)arg2;
- (void)imageProcessLensCommand:(id)arg1 didUnloadWithLensComponentManager:(id)arg2;
- (void)imageProcessLensCommand:(id)arg1 willLoadWithLensComponentManager:(id)arg2;
- (void)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

