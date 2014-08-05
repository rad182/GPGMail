/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSViewController.h"

@class ConversationViewController, MailStackViewController, MessageSelection, NSView, NoSelectionPlaceholderView, ViewingPaneView;

@interface ViewingPaneViewController : NSViewController
{
    BOOL _disableSnapshots;
    NoSelectionPlaceholderView *_placeholderView;
    ConversationViewController *_conversationViewController;
    MailStackViewController *_stackViewController;
    NSView *_snapshotView;
}

@property(retain, nonatomic) NSView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) MailStackViewController *stackViewController; // @synthesize stackViewController=_stackViewController;
@property(retain, nonatomic) ConversationViewController *conversationViewController; // @synthesize conversationViewController=_conversationViewController;
@property(retain, nonatomic) NoSelectionPlaceholderView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property BOOL disableSnapshots; // @synthesize disableSnapshots=_disableSnapshots;
- (void).cxx_destruct;
- (BOOL)validateToolbarItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_snapshotTimeout;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setShowDividerEdge:(BOOL)arg1;
- (void)_displayStackView;
- (void)_displayConversationView;
- (void)_displayNoSelectionPlaceholder;
- (id)actionViewController;
- (id)actionConversationMembers;
- (id)actionMessagesIncludingDuplicates:(BOOL)arg1;
- (id)currentMessageSelection;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
@property(retain) MessageSelection *representedObject;
@property(retain) ViewingPaneView *view;
- (void)loadView;
- (void)dealloc;
- (void)_viewingPaneViewControllerCommonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

