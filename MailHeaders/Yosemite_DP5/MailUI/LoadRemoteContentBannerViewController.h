/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "BannerViewController.h"

@class BannerImageView, NSButton, NSLayoutConstraint;

@interface LoadRemoteContentBannerViewController : BannerViewController
{
    NSButton *_loadRemoteContentButton;
    NSLayoutConstraint *_messageFieldToLoadRemoteContentButtonHorizontalSpacing;
    BannerImageView *_icon;
}

@property(nonatomic) __weak BannerImageView *icon; // @synthesize icon=_icon;
@property(nonatomic) __weak NSLayoutConstraint *messageFieldToLoadRemoteContentButtonHorizontalSpacing; // @synthesize messageFieldToLoadRemoteContentButtonHorizontalSpacing=_messageFieldToLoadRemoteContentButtonHorizontalSpacing;
@property(nonatomic) __weak NSButton *loadRemoteContentButton; // @synthesize loadRemoteContentButton=_loadRemoteContentButton;
- (void).cxx_destruct;
- (void)loadRemoteContent:(id)arg1;
- (void)updateWantsDisplay;
- (void)updateBannerContents;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setRepresentedObject:(id)arg1;
- (void)awakeFromNib;
@property(readonly, nonatomic) BOOL shouldDisplayToLoadRemoteContent;
@property(readonly, nonatomic) CDStruct_3c058996 iconAlignmentRectInsets;
- (id)backgroundColor;
- (void)dealloc;
- (id)nibName;

@end

