//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface SNZVoiceButton : UIButton
{
    CDUnknownBlockType _actionBlock;
}

+ (id)roundButtonWithRadius:(double)arg1 image:(id)arg2 backgroundColor:(id)arg3;
+ (id)rectangularButtonWithTitle:(id)arg1 font:(id)arg2 titleColor:(id)arg3 backgroundColor:(id)arg4 cornerRadius:(double)arg5 borderWidth:(double)arg6 borderColor:(id)arg7;
+ (id)rectangularButtonWithTitle:(id)arg1 font:(id)arg2 titleColor:(id)arg3 backgroundColor:(id)arg4 cornerRadius:(double)arg5;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void).cxx_destruct;
- (void)callActionBlock:(id)arg1;
- (void)addActionBlock:(CDUnknownBlockType)arg1 forControlEvents:(unsigned long long)arg2;

@end

